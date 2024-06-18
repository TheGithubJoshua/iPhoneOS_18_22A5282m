@class NSError;

@interface CNFoundationError : NSObject

@property (class, readonly) NSError *timeoutError;
@property (class, readonly) NSError *userCanceledError;
@property (class, readonly) NSError *notImplementedError;

+ (id)errorWithErrno:(int)a0;
+ (BOOL)isError:(id)a0 errorWithDomain:(id)a1 code:(long long)a2;
+ (BOOL)isCertificateError:(id)a0;
+ (id)errorWithErrno;
+ (BOOL)isNotImplementedError:(id)a0;
+ (id)errorWithErrno:(int)a0 userInfo:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)errorWithErrnoAndUserInfo:(id)a0;
+ (id)ifResultIsNil:(id)a0 setOutputError:(id *)a1 toError:(id)a2;
+ (BOOL)isFileAlreadyExistsError:(id)a0;
+ (BOOL)isCanceledError:(id)a0;
+ (BOOL)ifResultIsNo:(BOOL)a0 setOutputError:(id *)a1 toError:(id)a2;
+ (BOOL)isTimeoutError:(id)a0;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)ifResultIsNil:(id)a0 setOutputError:(id *)a1 withBlock:(id /* block */)a2;
+ (BOOL)ifResultIsNo:(BOOL)a0 setOutputError:(id *)a1 withBlock:(id /* block */)a2;
+ (BOOL)isFileNotFoundError:(id)a0;

@end
