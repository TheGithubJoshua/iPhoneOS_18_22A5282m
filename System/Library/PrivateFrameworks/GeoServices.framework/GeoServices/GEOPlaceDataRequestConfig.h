@class NSNumber, GEOPDPlaceRequest;

@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {
    double _timeout;
    unsigned long long _urlType;
    NSNumber *_requestPriority;
    unsigned long long _multipathServiceType;
    GEOPDPlaceRequest *_placeRequest;
    BOOL _usesBackgroundURL;
}

- (id)additionalStatesForNetworkEvent;
- (BOOL)usesBackgroundURL;
- (id)additionalHTTPHeaders;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKindForRequest:(id)a0 traits:(id)a1;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0 request:(id)a1 traits:(id)a2;
- (unsigned long long)urlType;
- (unsigned long long)multipathServiceType;
- (id)serviceTypeNumber;
- (double)timeout;

@end
