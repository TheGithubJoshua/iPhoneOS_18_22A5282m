@interface AGXA14FamilyDepthStencilState : _MTLDepthStencilState {
    struct DepthStencilState { struct DepthStencilStateDescriptorGen2 { union { struct { unsigned char frontFaceStencilCompareFunction : 3; unsigned char frontFaceStencilFailOperation : 3; unsigned char frontFaceStencilPassDepthFailOperation : 3; unsigned char frontFaceStencilPassDepthPassOperation : 3; unsigned char frontFaceStencilEnabled : 1; unsigned char backFaceStencilCompareFunction : 3; unsigned char backFaceStencilFailOperation : 3; unsigned char backFaceStencilPassDepthFailOperation : 3; unsigned char backFaceStencilPassDepthPassOperation : 3; unsigned char backFaceStencilEnabled : 1; unsigned char depthCompareFunc : 3; unsigned char depthWriteEnabled : 1; unsigned char pad : 2; unsigned char frontface_stencil_read_mask; unsigned char frontface_stencil_write_mask; unsigned char backface_stencil_read_mask; unsigned char backface_stencil_write_mask; } ; unsigned long long dword; } ; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } label; unsigned short load_store_needs; unsigned short dss_info; } desc; struct DepthStencilISPBits { union _AgxPppStateFrgCommonCtl { unsigned int all; unsigned char bytes[4]; struct { unsigned char FrontFaceDir : 1; unsigned char Cullmode : 2; unsigned char RSVD0 : 4; unsigned char InBatchWindow : 1; unsigned char TagsortFlushCtl : 2; unsigned char RSVD1 : 3; unsigned char TagsortAccumDisable : 1; unsigned char Visbool : 1; unsigned char Vistest : 1; unsigned char Scenable : 1; unsigned char Dbenable : 1; unsigned char FaceStencilPres : 1; unsigned char TwoSided : 1; unsigned char RectWarpDisable : 1; unsigned char Tagwritedisable : 1; unsigned char TwoPassFbOpa : 1; unsigned char MidRenderCompute : 1; unsigned char RSVD2 : 1; unsigned char SampleMaskSelect : 1; unsigned char TriMergeDisable : 1; unsigned char OverlapCheckMode : 1; unsigned char UscEsl2 : 1; unsigned char Passtype : 3; } bits; } ctl; union _AgxPppStateFrgFaceCtl { unsigned int all; unsigned char bytes[4]; struct { unsigned char Sref : 8; unsigned short Pointlinewidth : 10; unsigned char FillModeOverride : 2; unsigned char Linefilllastpixel : 1; unsigned char Dwritedisable : 1; unsigned char FsDepthDirQual : 2; unsigned char Dcmpmode : 3; unsigned char RSVD0 : 1; unsigned char Objtype : 4; } bits; } ispa; } depthstencil_isp_bits; struct StencilISPBits { union _AgxPppStateFrgFaceStencil { unsigned int all; unsigned char bytes[4]; struct { unsigned char Swmask : 8; unsigned char Scmpmask : 8; unsigned char Sop3 : 3; unsigned char Sop2 : 3; unsigned char Sop1 : 3; unsigned char Scmpmode : 3; unsigned char RSVD0 : 4; } bits; } fb; union _AgxPppStateFrgFaceStencil { unsigned int all; unsigned char bytes[4]; struct { unsigned char Swmask : 8; unsigned char Scmpmask : 8; unsigned char Sop3 : 3; unsigned char Sop2 : 3; unsigned char Sop1 : 3; unsigned char Scmpmode : 3; unsigned char RSVD0 : 4; } bits; } bb; } stencil_isp_bits; } _impl;
}

@property (readonly) BOOL readsDepth;
@property (readonly) BOOL writesDepth;
@property (readonly) BOOL readsStencil;
@property (readonly) BOOL writesStencil;

- (id).cxx_construct;
- (void).cxx_destruct;

@end