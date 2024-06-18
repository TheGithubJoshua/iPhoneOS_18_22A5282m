@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {
    NSString *_name;
    NSString *_grouping;
    id _value;
    NSMutableArray *_types;
    BOOL _primary;
}

- (BOOL)isPrimary;
- (id)grouping;
- (void)setValue:(id)a0;
- (id)name;
- (void)addTypes:(id)a0;
- (id)description;
- (id)types;
- (void)dealloc;
- (void)setGrouping:(id)a0;
- (id)initWithName:(id)a0;
- (id)value;
- (void)setIsPrimary:(BOOL)a0;
- (void)addType:(id)a0;

@end
