@class NSString, NSError;

@interface MRMigrationBehaviorResult : NSObject

@property (retain, nonatomic) NSString *sourceUID;
@property (retain, nonatomic) NSString *destinationUID;
@property (nonatomic) long long action;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSError *error;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
