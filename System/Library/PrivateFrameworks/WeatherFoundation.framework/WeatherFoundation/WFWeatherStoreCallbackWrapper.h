@interface WFWeatherStoreCallbackWrapper : NSObject

@property (nonatomic) unsigned long long requestType;
@property (copy, nonatomic) id /* block */ forecastRetrievalCompletionBlock;
@property (copy, nonatomic) id /* block */ aqiScaleRetrievalCompletionBlock;
@property (readonly, nonatomic) BOOL executedCompletionBlock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (id)initWithAQIScaleRetrievalBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithForecastRetrievalBlock:(id /* block */)a0;
- (void)executeCallbackwithResponse:(id)a0 error:(id)a1;

@end
