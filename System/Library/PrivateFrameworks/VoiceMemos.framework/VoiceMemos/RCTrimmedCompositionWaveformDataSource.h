@class NSURL;

@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource

@property (readonly, nonatomic) NSURL *destinationWaveformURL;

- (id)initWithSourceComposition:(id)a0 destinationWaveformURL:(id)a1;
- (void).cxx_destruct;
- (id)generatedWaveformOutputURL;
- (BOOL)preferLoadingFragmentWaveforms;

@end
