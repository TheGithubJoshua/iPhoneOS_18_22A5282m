@interface CKTuple4 : CKTuple

@property (retain, nonatomic) id v1;
@property (retain, nonatomic) id v2;
@property (retain, nonatomic) id v3;
@property (retain, nonatomic) id v4;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithObject1:(id)a0 object2:(id)a1 object3:(id)a2 object4:(id)a3;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
