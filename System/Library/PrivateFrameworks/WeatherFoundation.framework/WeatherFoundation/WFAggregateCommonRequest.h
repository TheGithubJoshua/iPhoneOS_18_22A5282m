@class WFRequestOptions, NSString, WFLocation, NSLocale;

@interface WFAggregateCommonRequest : WFTask

@property (retain, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) WFLocation *location;
@property (readonly, nonatomic) unsigned long long types;
@property (readonly, nonatomic) int units;
@property (readonly, nonatomic) WFRequestOptions *requestOptions;
@property (readonly, nonatomic) NSString *trackingParameter;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (void)cleanup;
- (void)handleResponse:(id)a0;
- (void)startWithService:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)handleCancellation;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (unsigned long long)_supportedForecastTypes:(unsigned long long)a0;
- (id)initWithLocation:(id)a0 types:(unsigned long long)a1 trackingParameter:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithLocation:(id)a0 types:(unsigned long long)a1 units:(int)a2 requestOptions:(id)a3 trackingParameter:(id)a4 completionHandler:(id /* block */)a5;
- (id)initWithLocation:(id)a0 types:(unsigned long long)a1 units:(int)a2 trackingParameter:(id)a3 completionHandler:(id /* block */)a4;

@end
