#pragma once

namespace cv
{
namespace detail
{

    typedef short deriv_type;
    typedef short depth_type;

    struct DepthAwareLKTrackerInvoker : ParallelLoopBody
    {
        DepthAwareLKTrackerInvoker( const Mat& _prevImg, const Mat& _prevDeriv, const Mat& _nextImg,
                          const Point2f* _prevPts, Point2f* _nextPts,
                          uchar* _status, float* _err,
                          Size _winSize, TermCriteria _criteria,
                          int _level, int _maxLevel, int _flags, float _minEigThreshold, 
                          const Mat& _depthMap);

        void operator()(const Range& range) const CV_OVERRIDE;

        const Mat* prevImg;
        const Mat* nextImg;
        const Mat* prevDeriv;
        const Point2f* prevPts;
        Point2f* nextPts;
        uchar* status;
        float* err;
        Size winSize;
        TermCriteria criteria;
        int level;
        int maxLevel;
        int flags;
        float minEigThreshold;
        const Mat* depthMap;
    };

}// namespace detail
}// namespace cv
