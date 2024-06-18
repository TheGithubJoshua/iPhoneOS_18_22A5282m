@class NSDictionary;

@interface PPEventMetadata : NSObject <NSCopying> {
    unsigned long long _ocnt_precomputedHash;
}

@property (readonly, nonatomic) NSDictionary *titlesAndParticipants;
@property (readonly, nonatomic) double earliestStartTime;
@property (readonly, nonatomic) BOOL shouldConsiderAlarms;

+ (id)eventMetadataWithTitlesAndParticipants:(id)a0 earliestStartTime:(double)a1 shouldConsiderAlarms:(BOOL)a2;

- (unsigned long long)_hash;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitlesAndParticipants:(id)a0 earliestStartTime:(double)a1 shouldConsiderAlarms:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToEventMetadata:(id)a0;

@end
