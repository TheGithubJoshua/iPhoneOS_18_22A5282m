@class NSString, NSArray;

@interface ANHomeContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *homeName;
@property (retain, nonatomic) NSArray *zoneNames;
@property (retain, nonatomic) NSArray *roomNames;
@property (nonatomic) BOOL isEmpty;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
