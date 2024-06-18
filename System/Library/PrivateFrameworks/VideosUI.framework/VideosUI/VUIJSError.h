@class NSError;

@interface VUIJSError : VUIJSObject {
    VUIJSError *_jsUnderlyingError;
}

@property (readonly, nonatomic) NSError *wrappedError;

- (id)domain;
- (void).cxx_destruct;
- (id)description;
- (id)failureReason;
- (id)code;
- (id)userInfo;
- (id)underlyingError;
- (id)initWithError:(id)a0 appContext:(id)a1;
- (id)recoverySuggestion;

@end
