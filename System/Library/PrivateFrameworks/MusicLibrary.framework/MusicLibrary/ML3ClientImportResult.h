@class NSDictionary;

@interface ML3ClientImportResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL success;
@property (readonly, copy, nonatomic) NSDictionary *resultingDatabasePersistentIDs;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0 resultingDatabasePersistentIDs:(id)a1;

@end
