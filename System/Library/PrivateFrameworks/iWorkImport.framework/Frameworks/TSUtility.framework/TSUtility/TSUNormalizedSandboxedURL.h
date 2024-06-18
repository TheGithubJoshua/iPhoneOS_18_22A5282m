@class TSUSandboxedURL;

@interface TSUNormalizedSandboxedURL : TSUSandboxedURL {
    TSUSandboxedURL *_originalSandboxedURL;
}

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasSandboxAccess;
- (id)initWithURL:(id)a0 originalSandboxedURL:(id)a1;
- (id)originalSandboxedURLForNormalizing;

@end
