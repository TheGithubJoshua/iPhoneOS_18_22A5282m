@class NSString, NSNumber, GEODirectionsRequest;

@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig <GEOServiceRequestConfiguring> {
    NSNumber *_requestPriority;
    GEODirectionsRequest *_request;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)additionalStatesForNetworkEvent;
- (BOOL)usesBackgroundURL;
- (id)additionalHTTPHeaders;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKindForRequest:(id)a0 traits:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)urlType;
- (unsigned long long)multipathServiceType;
- (id)serviceTypeNumber;
- (id)additionalURLQueryItems;
- (id)initWithRequest:(id)a0 requestPriority:(id)a1;

@end
