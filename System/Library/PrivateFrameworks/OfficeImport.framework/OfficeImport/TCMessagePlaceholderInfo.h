@interface TCMessagePlaceholderInfo : NSObject {
    id mKey;
    BOOL mInUse;
}

- (BOOL)isInUse;
- (id)init;
- (id)key;
- (void).cxx_destruct;
- (void)setInUse:(BOOL)a0;

@end
