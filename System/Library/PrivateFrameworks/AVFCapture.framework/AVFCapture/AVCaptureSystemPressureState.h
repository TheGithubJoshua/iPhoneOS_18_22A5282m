@class NSString, AVCaptureSystemPressureStateInternal;

@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

+ (void)initialize;

- (id)init;
- (id)spiDebugDescription;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)recommendedFrameRateRangeForPortrait;
- (id)debugDescription;
- (int)figLevel;
- (void)dealloc;
- (id)initWithFigLevel:(int)a0 factors:(unsigned long long)a1 recommendedFrameRateRangeForPortrait:(id)a2;

@end
