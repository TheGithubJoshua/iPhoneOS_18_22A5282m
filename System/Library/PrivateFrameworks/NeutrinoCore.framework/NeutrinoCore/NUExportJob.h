@interface NUExportJob : NURenderJob

- (id)initWithRequest:(id)a0;
- (id)result;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (id)exportRequest;
- (id)initWithExportRequest:(id)a0;

@end
