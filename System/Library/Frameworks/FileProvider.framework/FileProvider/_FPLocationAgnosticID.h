@class FPItemID;

@interface _FPLocationAgnosticID : NSObject {
    FPItemID *_itemID;
    FPItemID *_alternateID;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithItem:(id)a0;
- (id)initWithItemID:(id)a0;

@end
