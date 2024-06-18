@class NSString;

@interface _MFEmailAddress : NSObject {
    NSString *_fullAddress;
}

@property (readonly, copy, nonatomic) NSString *fullAddress;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, copy, nonatomic) NSString *displayName;

- (id)initWithAddress:(id)a0 displayName:(id)a1;
- (id)initWithAddress:(id)a0;
- (void).cxx_destruct;

@end
