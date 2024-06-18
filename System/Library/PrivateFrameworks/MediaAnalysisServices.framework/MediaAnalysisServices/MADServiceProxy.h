@class MADService;

@interface MADServiceProxy : NSObject <VCPMediaAnalysisClientProtocol> {
    MADService *_service;
}

- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (void)reportProgress:(double)a0 forRequest:(int)a1;

@end
