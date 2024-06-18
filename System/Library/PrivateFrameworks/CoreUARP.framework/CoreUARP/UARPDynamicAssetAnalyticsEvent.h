@class NSURL, UARPSuperBinaryAsset, NSMutableArray;

@interface UARPDynamicAssetAnalyticsEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_events;
}

+ (id)tag;

- (id)init;
- (void)send;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)decomposeUARP;

@end
