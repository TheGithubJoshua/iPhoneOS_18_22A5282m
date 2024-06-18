@class NSURL, NSArray;

@interface ISURLResolverOperation : ISOperation {
    struct __CFHost { } *_host;
    NSURL *_url;
}

@property (copy, nonatomic) NSURL *URL;
@property (readonly) NSArray *resolvedAddresses;
@property (readonly) NSArray *resolvedAddressStrings;

- (id)initWithURL:(id)a0;
- (id)url;
- (void).cxx_destruct;
- (void)setUrl:(id)a0;
- (void)dealloc;
- (void)run;
- (void)_resolutionCompletedWithError:(id)a0;
- (void)_runLookupForHostname:(id)a0;

@end
