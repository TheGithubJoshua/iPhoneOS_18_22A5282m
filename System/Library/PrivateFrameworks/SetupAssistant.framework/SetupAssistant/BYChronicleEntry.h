@class NSString;

@interface BYChronicleEntry : NSObject

@property (retain, nonatomic) NSString *productVersion;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToEntry:(id)a0;
- (BOOL)createdOnCurrentMajorVersion;
- (id)initWithProductVersion:(id)a0;

@end
