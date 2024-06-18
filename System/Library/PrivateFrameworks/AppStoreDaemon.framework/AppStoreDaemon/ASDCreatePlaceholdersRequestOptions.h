@class NSArray;

@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL completeDataPromise;
@property (nonatomic) BOOL createAsMobileBackup;
@property (readonly, nonatomic) NSArray *items;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithApplicationMetadata:(id)a0;

@end
