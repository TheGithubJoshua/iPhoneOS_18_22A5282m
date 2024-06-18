@class NSData, DIIdentityDocument;

@interface PKIdentityDocument : NSObject

@property (retain, nonatomic) DIIdentityDocument *wrapped;
@property (readonly, nonatomic) NSData *encryptedData;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDIIdentityDocument:(id)a0;

@end
