@class NSString, NSArray, GEOMapServiceTraits;

@interface _GEOGuideLocationsLookupTicket : GEOAbstractRequestResponseTicket <GEOMapServiceGuideLocationsLookupTicket> {
    NSArray *_guideLocationEntries;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (id)initWithRequest:(id)a0 traits:(id)a1 guideLocationsEntries:(id)a2;

@end
