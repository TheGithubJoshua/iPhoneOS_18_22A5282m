@class NSLocale;

@interface WFDailyForecastRequest : WFAggregateForecastRequest

@property (retain, nonatomic) NSLocale *locale;

+ (BOOL)supportsSecureCoding;

- (id)initWithLocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)startWithService:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
