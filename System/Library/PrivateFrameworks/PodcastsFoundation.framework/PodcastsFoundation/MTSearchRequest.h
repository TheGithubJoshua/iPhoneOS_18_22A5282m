@interface MTSearchRequest : MTBaseMAPIRequest <MTMAPIRequest> {
    void /* unknown type, empty encoding */ contentTypes;
    void /* unknown type, empty encoding */ limit;
    void /* unknown type, empty encoding */ term;
}

- (id)init;
- (void)performWithCompletion:(id /* block */)a0;
- (void)setLimit:(long long)a0;
- (void).cxx_destruct;
- (id)initWithTerm:(id)a0 contentTypes:(id)a1;

@end
