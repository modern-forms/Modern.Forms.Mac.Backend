namespace Avalonia.MicroCom
{
    internal interface IMicroComShadowContainer
    {
        MicroComShadow Shadow { get; set; }
        void OnReferencedFromNative();
        void OnUnreferencedFromNative();
    }
}
