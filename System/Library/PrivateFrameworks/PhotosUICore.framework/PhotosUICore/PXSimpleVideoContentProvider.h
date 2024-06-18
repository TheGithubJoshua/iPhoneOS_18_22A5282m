@class NSString, PXVideoContentProviderLoadingResult;

@interface PXSimpleVideoContentProvider : PXVideoContentProvider {
    PXVideoContentProviderLoadingResult *_loadingResult;
    NSString *_contentIdentifier;
    double _loadingProgress;
}

- (void)setLoadingProgress:(double)a0;
- (id)init;
- (id)contentIdentifier;
- (void).cxx_destruct;
- (id)description;
- (double)loadingProgress;
- (void)beginLoadingWithPriority:(long long)a0;
- (id)initWithPlayerItem:(id)a0 contentIdentifier:(id)a1;
- (id)loadingResult;
- (void)setLoadingResult:(id)a0;

@end
