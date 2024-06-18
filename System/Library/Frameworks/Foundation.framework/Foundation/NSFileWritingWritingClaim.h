@class NSURL, NSFileAccessNode;

@interface NSFileWritingWritingClaim : NSFileAccessClaim {
    NSURL *_url1;
    BOOL _url1DidChange;
    unsigned long long _options1;
    NSURL *_url2;
    BOOL _url2DidChange;
    unsigned long long _options2;
    NSFileAccessNode *_location1;
    NSFileAccessNode *_location2;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;
- (BOOL)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (id)allURLs;
- (BOOL)blocksClaim:(id)a0;
- (void)forwardUsingConnection:(id)a0 crashHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (void)granted;
- (BOOL)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (BOOL)evaluateSelfWithRootNode:(id)a0 checkSubarbitrability:(BOOL)a1;
- (void)protectFilesAgainstEviction;
- (void)dealloc;
- (void)resolveURLsThenContinueInvokingClaimer:(id /* block */)a0;
- (void)invokeClaimer;
- (void)devalueSelf;
- (id)initWithPurposeID:(id)a0 url:(id)a1 options:(unsigned long long)a2 url:(id)a3 options:(unsigned long long)a4 claimer:(id /* block */)a5;

@end
