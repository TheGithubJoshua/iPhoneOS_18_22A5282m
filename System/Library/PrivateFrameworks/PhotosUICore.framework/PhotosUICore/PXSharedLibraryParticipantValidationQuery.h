@class NSString;

@interface PXSharedLibraryParticipantValidationQuery : NSObject

@property (readonly, nonatomic) NSString *address;
@property (nonatomic) BOOL isValid;

- (id)init;
- (unsigned long long)hash;
- (id)initWithAddress:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
