@class NSMutableDictionary;

@interface ANRapportEventStreamHandler : NSObject

@property (readonly, nonatomic) NSMutableDictionary *rapportActivationHandlers;

- (id)init;
- (void)addAnnounceRapportServiceType;
- (void)setEventStreamHandler;
- (void)addRapportServiceType:(id)a0 activationBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
