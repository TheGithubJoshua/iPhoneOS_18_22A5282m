@class NSError;

@interface PLResultFailure : PLResult {
    NSError *_error;
}

- (id)initWithError:(id)a0;
- (id)resultWithError:(id *)a0;
- (BOOL)isFailure;
- (id)result;
- (void).cxx_destruct;
- (id)description;
- (id)error;
- (BOOL)isSuccess;

@end
