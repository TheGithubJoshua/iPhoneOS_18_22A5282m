@class NSString;

@interface NetPreferences : NSObject {
    NSString *_buildVersion;
    NSString *_productVersion;
    BOOL _serviceDebugging;
    BOOL _isNetworkReachable;
    NSString *_requestCountryCode;
    NSString *_requestLanguageCode;
    NSString *_acceptLanguageCode;
}

@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;
@property (retain) NSString *acceptLanguageCode;
@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (readonly, nonatomic) NSString *UUID;

+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

- (id)init;
- (id)stocksYQLBaseURL;
- (id)_stocksAcceptLanguage;
- (void)resetLocale;
- (id)_stocksUserAgent;
- (void).cxx_destruct;
- (id)_cacheDirectoryPath;
- (id)signedRequestForURL:(id)a0 parameters:(id)a1;
- (id)stocksLanguageCode;
- (id)stocksLanguageCodeForLanguage:(id)a0;
- (id)stocksCountryCode;
- (id)backsideLogoURL;
- (id)logoButtonImage;
- (id)_urlStringWithHost:(id)a0;
- (void)addStocksHeadersToPostRequest:(id)a0;
- (id)defaultBacksideLogoURL;
- (id)financeRequestAttributes;
- (id)fullQuoteURLOverrideForStock:(id)a0;
- (id)logoBacksideImage;
- (BOOL)serviceDebugging;
- (id)serviceDebuggingPath;

@end
