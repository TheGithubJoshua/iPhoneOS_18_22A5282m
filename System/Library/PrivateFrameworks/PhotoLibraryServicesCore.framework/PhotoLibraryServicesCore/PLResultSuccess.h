@interface PLResultSuccess : PLResult {
    id _result;
}

- (id)initWithResult:(id)a0;
- (id)resultWithError:(id *)a0;
- (BOOL)isFailure;
- (id)result;
- (void).cxx_destruct;
- (id)description;
- (id)error;
- (BOOL)isSuccess;

@end
