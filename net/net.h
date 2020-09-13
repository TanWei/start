class CNet 
{
    public: 
        CNet();
        virtual ~CNet();
        void SetN(int n)
        {
            m_n = n;
        }
        int Getn()
        {
            return m_n;
        }
    private:
        int m_n;
};