@interface VideosUI.HighlightsManager : NSObject <SLHighlightCenterDelegate> {
    void /* unknown type, empty encoding */ highlightCenter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_syndicationIdToHighlightMap;
    void /* unknown type, empty encoding */ pendingHighlightsUpdate;
    void /* unknown type, empty encoding */ cachedDSID;
    void /* unknown type, empty encoding */ internalHighlightsVersion;
}

- (void)highlightCenter:(id)a0 didRemoveHighlights:(id)a1;
- (void)highlightCenterSettingsEnablementHasChanged:(id)a0;
- (void)highlightCenterDidAddHighlights:(id)a0;
- (void)handleAccountStoreDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
