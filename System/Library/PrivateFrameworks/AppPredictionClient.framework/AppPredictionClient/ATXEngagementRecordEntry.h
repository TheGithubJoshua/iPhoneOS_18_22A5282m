@class NSDate, ATXExecutableIdentifier;

@interface ATXEngagementRecordEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXExecutableIdentifier *executable;
@property (readonly, nonatomic) NSDate *dateEngaged;
@property (readonly, nonatomic) unsigned long long engagementRecordType;

- (id)initWithCoder:(id)a0;
- (id)jsonDict;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithExecutable:(id)a0 dateEngaged:(id)a1 engagementRecordType:(unsigned long long)a2;

@end
