@class NSString, NSPersonNameComponents;

@interface LPCollaborationHandle : NSObject

@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) NSPersonNameComponents *nameComponents;

- (id)stringValue;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithHandle:(id)a0 nameComponents:(id)a1;

@end
