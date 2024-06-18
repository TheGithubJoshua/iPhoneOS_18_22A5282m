@class NSURLSession, NSString, NSURLSessionTask, NSMutableData, NSURLRequest;

@interface YQLRequest : NSObject <NSURLSessionDataDelegate> {
    NSURLSession *_defaultSession;
    NSURLSessionTask *_dataTask;
    NSURLRequest *_request;
    NSMutableData *_rawData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveDebugString;
+ (void)appendDebugString:(id)a0;
+ (void)setShouldGenerateOfflineData:(BOOL)a0;
+ (BOOL)shouldGenerateOfflineData;

- (BOOL)isLoading;
- (id)init;
- (void)failWithError:(id)a0;
- (void)cancel;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void).cxx_destruct;
- (void)parseData:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)dealloc;
- (void)loadRequest:(id)a0;
- (void)didParseData;
- (id)YQLLanguageCode;
- (id)YQLCountryCode;
- (void)_createDefaultSession;
- (void)_loadDefaultSessionIfNeeded;
- (id)_yahooDoppelganger_taskForRequest:(id)a0 delegate:(id)a1;
- (void)cancelAndInvalidate;
- (void)failToParseWithData:(id)a0;
- (void)failToParseWithDataSeriesDictionary:(id)a0;
- (id)taskForRequest:(id)a0 delegate:(id)a1;

@end
