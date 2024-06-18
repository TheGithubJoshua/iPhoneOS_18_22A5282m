@interface FigRoutePredictionFetchOneShotCompletion : NSObject {
    id /* block */ _completionHandler;
}

- (id)init;
- (void)invokeWithRoutePredictions:(id)a0 predictionContext:(id)a1;
- (void)dealloc;
- (id)initWithCompletionHandler:(id /* block */)a0;

@end
