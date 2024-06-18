@class NSMutableDictionary, DCMapsLink;

@interface DCMapsURLGenerator : DCURLGenerator

@property (readonly, nonatomic) NSMutableDictionary *queryDictionary;
@property (readonly, nonatomic) DCMapsLink *mapsLink;

+ (id)URLWithMapsLink:(id)a0;

- (id)query;
- (id)mapType;
- (id)scheme;
- (id)URL;
- (id)host;
- (id)path;
- (void).cxx_destruct;
- (id)directionsMode;
- (id)initWithMapsLink:(id)a0;
- (void)populateQueryDictionary;
- (void)setString:(id)a0 forQueryKey:(id)a1;

@end
