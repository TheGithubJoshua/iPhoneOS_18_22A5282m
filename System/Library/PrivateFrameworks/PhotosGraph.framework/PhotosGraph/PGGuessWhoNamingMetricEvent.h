@class NSDictionary, PGManager;

@interface PGGuessWhoNamingMetricEvent : PGAbstractMetricEvent {
    PGManager *_manager;
    NSDictionary *_payload;
}

@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) BOOL hasMeNodeAndMeContact;
@property (nonatomic) unsigned long long numberOfPeopleToName;
@property (nonatomic) unsigned long long numberOfPeopleFavorited;
@property (nonatomic) unsigned long long librarySize;
@property (nonatomic) unsigned long long numberOfNamedPeople;
@property (nonatomic) double proportionOfNamedPeople;
@property (nonatomic) double numberOfPeopleWithAContactSuggestion;
@property (nonatomic) double recallContactSuggestion;
@property (nonatomic) double numberOfPeopleWithAHighConfidenceContactSuggestion;
@property (nonatomic) double recallHighConfidenceContactSuggestion;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithGraphManager:(id)a0;
- (id)identifier;
- (void)gatherMetricsWithProgressBlock:(id /* block */)a0;

@end
