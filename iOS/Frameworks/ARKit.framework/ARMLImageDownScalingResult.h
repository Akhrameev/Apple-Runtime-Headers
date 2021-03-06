//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARMLImageDownScalingResult : NSObject
{
    struct __CVBuffer *_pixelBuffer;
    struct __CVBuffer *_undistortedPixelBuffer;
    struct CGSize _regionOfInterest;
    struct CGRect _cropRegion;
}

@property(nonatomic) struct __CVBuffer *undistortedPixelBuffer; // @synthesize undistortedPixelBuffer=_undistortedPixelBuffer;
@property(readonly, nonatomic) struct CGRect cropRegion; // @synthesize cropRegion=_cropRegion;
@property(readonly, nonatomic) struct CGSize regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(readonly, nonatomic) struct CGSize imageResolution;
- (void)setPixelBuffer:(struct __CVBuffer *)arg1;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 regionOfInterest:(struct CGSize)arg2 cropRegion:(struct CGRect)arg3;

@end

