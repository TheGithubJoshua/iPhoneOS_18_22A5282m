@class NSPersistentHistoryToken;

@interface REMNSPersistentHistoryToken : REMChangeToken

@property (readonly, nonatomic) NSPersistentHistoryToken *token;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithPersistentHistoryToken:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (long long)compareToken:(id)a0 error:(id *)a1;

@end
