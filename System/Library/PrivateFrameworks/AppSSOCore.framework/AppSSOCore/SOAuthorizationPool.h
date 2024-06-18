@class NSMutableArray;

@interface SOAuthorizationPool : NSObject {
    NSMutableArray *_pool;
}

- (id)init;
- (void)addAuthorization:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)removeAuthorization:(id)a0;

@end
