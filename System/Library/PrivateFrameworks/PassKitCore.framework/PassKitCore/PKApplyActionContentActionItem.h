@class NSArray, NSString;
@protocol NSCopying;

@interface PKApplyActionContentActionItem : NSObject <NSCopying, PKIdentifiable>

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSString *contextPrimaryActionIdentifier;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
