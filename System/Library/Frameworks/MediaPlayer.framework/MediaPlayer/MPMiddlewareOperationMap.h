@class NSMapTable, NSMutableArray;

@interface MPMiddlewareOperationMap : NSObject {
    NSMapTable *_middlewareOperationMap;
    NSMutableArray *_middleware;
    NSMutableArray *_operations;
}

+ (id)mapForRequest:(id)a0;

- (id)_init;
- (id)operationsForMiddleware:(id)a0;
- (id)allOperations;
- (id)allMiddleware;
- (void).cxx_destruct;

@end
