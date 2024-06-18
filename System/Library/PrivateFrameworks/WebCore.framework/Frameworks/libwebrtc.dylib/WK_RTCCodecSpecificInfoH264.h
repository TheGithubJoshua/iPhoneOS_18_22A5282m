@class NSString;

@interface WK_RTCCodecSpecificInfoH264 : NSObject <RTCCodecSpecificInfo>

@property (nonatomic) unsigned long long packetizationMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CodecSpecificInfo { int x0; union CodecSpecificInfoUnion { struct CodecSpecificInfoVP8 { BOOL x0; unsigned char x1; BOOL x2; char x3; BOOL x4; unsigned long long x5[3]; unsigned long long x6; unsigned long long x7[3]; unsigned long long x8; } x0; struct CodecSpecificInfoVP9 { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned char x5; BOOL x6; BOOL x7; unsigned char x8; unsigned long long x9; unsigned long long x10; BOOL x11; unsigned short x12[8]; unsigned short x13[8]; struct GofInfoVP9 { unsigned long long x0; unsigned char x1[255]; BOOL x2[255]; unsigned char x3[255]; unsigned char x4[255][3]; unsigned short x5; } x14; unsigned char x15; unsigned char x16[3]; BOOL x17; } x1; struct CodecSpecificInfoH264 { int x0; unsigned char x1; BOOL x2; BOOL x3; } x2; struct CodecSpecificInfoH265 { int x0; BOOL x1; } x3; } x1; BOOL x2; struct optional<webrtc::GenericFrameInfo> { BOOL x0; union { struct GenericFrameInfo { int x0; int x1; struct InlinedVector<webrtc::DecodeTargetIndication, 10UL, std::allocator<webrtc::DecodeTargetIndication>> { struct Storage<webrtc::DecodeTargetIndication, 10UL, std::allocator<webrtc::DecodeTargetIndication>> { struct CompressedTuple<std::allocator<webrtc::DecodeTargetIndication>, unsigned long> { unsigned long long x0; } x0; union Data { struct Allocated { int *x0; unsigned long long x1; } x0; struct Inlined { char x0[40]; } x1; } x1; } x0; } x2; struct InlinedVector<int, 4UL, std::allocator<int>> { struct Storage<int, 4UL, std::allocator<int>> { struct CompressedTuple<std::allocator<int>, unsigned long> { unsigned long long x0; } x0; union Data { struct Allocated { int *x0; unsigned long long x1; } x0; struct Inlined { char x0[16]; } x1; } x1; } x0; } x3; struct InlinedVector<int, 4UL, std::allocator<int>> { struct Storage<int, 4UL, std::allocator<int>> { struct CompressedTuple<std::allocator<int>, unsigned long> { unsigned long long x0; } x0; union Data { struct Allocated { int *x0; unsigned long long x1; } x0; struct Inlined { char x0[16]; } x1; } x1; } x0; } x4; struct InlinedVector<webrtc::CodecBufferUsage, 8UL, std::allocator<webrtc::CodecBufferUsage>> { struct Storage<webrtc::CodecBufferUsage, 8UL, std::allocator<webrtc::CodecBufferUsage>> { struct CompressedTuple<std::allocator<webrtc::CodecBufferUsage>, unsigned long> { unsigned long long x0; } x0; union Data { struct Allocated { struct CodecBufferUsage *x0; unsigned long long x1; } x0; struct Inlined { char x0[64]; } x1; } x1; } x0; } x5; struct vector<bool, std::allocator<bool>> { unsigned long long *x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long x0; } x2; } x6; struct bitset<32UL> { unsigned long long x0; } x7; } x0; struct dummy_type { struct empty_struct { } x0[208]; } x1; } x1; } x3; struct optional<webrtc::FrameDependencyStructure> { BOOL x0; union { struct FrameDependencyStructure { int x0; int x1; int x2; struct InlinedVector<int, 10UL, std::allocator<int>> { struct Storage<int, 10UL, std::allocator<int>> { struct CompressedTuple<std::allocator<int>, unsigned long> { unsigned long long x0; } x0; union Data { struct Allocated { int *x0; unsigned long long x1; } x0; struct Inlined { char x0[40]; } x1; } x1; } x0; } x3; struct InlinedVector<webrtc::RenderResolution, 4UL, std::allocator<webrtc::RenderResolution>> { struct Storage<webrtc::RenderResolution, 4UL, std::allocator<webrtc::RenderResolution>> { struct CompressedTuple<std::allocator<webrtc::RenderResolution>, unsigned long> { unsigned long long x0; } x0; union Data { struct Allocated { struct RenderResolution *x0; unsigned long long x1; } x0; struct Inlined { char x0[32]; } x1; } x1; } x0; } x4; struct vector<webrtc::FrameDependencyTemplate, std::allocator<webrtc::FrameDependencyTemplate>> { struct FrameDependencyTemplate *x0; struct FrameDependencyTemplate *x1; struct __compressed_pair<webrtc::FrameDependencyTemplate *, std::allocator<webrtc::FrameDependencyTemplate>> { struct FrameDependencyTemplate *x0; } x2; } x5; } x0; struct dummy_type { struct empty_struct { } x0[128]; } x1; } x1; } x4; })nativeCodecSpecificInfo;

@end