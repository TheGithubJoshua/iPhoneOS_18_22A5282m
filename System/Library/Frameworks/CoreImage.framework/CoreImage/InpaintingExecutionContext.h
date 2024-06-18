@class NSString, NSMutableArray;

@interface InpaintingExecutionContext : NSObject {
    NSMutableArray *processingResolutions;
    NSMutableArray *executionTimes;
}

@property int lastNumberOfTilesUsed;
@property (retain) NSString *lastModelResourceUsed;
@property int lastInpaintingModeUsed;

- (id)init;
- (double)lastExecutionTime;
- (void)appendProcessingResolution:(int)a0 andTime:(double)a1;
- (id)executionTimesLog;
- (int)filterProcessingCount;
- (void)dealloc;
- (id)CIImageProcessorDigestObject;
- (id)processingResolutionsLog;
- (int)lastProcessingResolution;

@end
