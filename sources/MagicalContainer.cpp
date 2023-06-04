#include "MagicalContainer.hpp"

using namespace std;
namespace ariel
{
    // basic implementation so it will compile

    // magical container
    void MagicalContainer::addElement(int element)
    {
    }
    void MagicalContainer::removeElement(int element)
    {
    }
    int MagicalContainer::size() const
    {
        return 0;
    }
    bool MagicalContainer::isPrime(int num)
    {
        return false;
    }
    // AscendingIterator
    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) : container(container), index(0)
    {
    }

    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) : container(other.container), index(other.index)
    {
    }
    MagicalContainer::AscendingIterator::~AscendingIterator()
    {
    }
    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
    {
        return *this;
    }
    MagicalContainer::AscendingIterator::AscendingIterator(AscendingIterator &&other) noexcept : container(other.container), index(other.index)
    {
    }
    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(AscendingIterator &&other) noexcept
    {
        return *this;
    }

    int MagicalContainer::AscendingIterator::operator*() const
    {
        return 1;
    }
    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++()
    {
        return *this;
    }
    bool MagicalContainer::AscendingIterator::operator<(const CustomIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::AscendingIterator::operator>(const CustomIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::AscendingIterator::operator==(const CustomIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::AscendingIterator::operator!=(const CustomIterator &other) const
    {
        return false;
    }
    // operators with ascending iterator as other
    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
    {
        return false;
    }

    // SideCrossIterator
    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) : container(container), index(0)
    {
    }
    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) : container(other.container), index(other.index)
    {
    }
    MagicalContainer::SideCrossIterator::~SideCrossIterator()
    {
    }
    MagicalContainer::SideCrossIterator::SideCrossIterator(SideCrossIterator &&other) noexcept : container(other.container), index(other.index)
    {
    }
    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(SideCrossIterator &&other) noexcept
    {
        return *this;
    }
    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other)
    {
        return *this;
    }
    int MagicalContainer::SideCrossIterator::operator*() const
    {
        return 1;
    }
    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++()
    {
        return *this;
    }
    bool MagicalContainer::SideCrossIterator::operator<(const CustomIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::SideCrossIterator::operator>(const CustomIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::SideCrossIterator::operator==(const CustomIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::SideCrossIterator::operator!=(const CustomIterator &other) const
    {
        return false;
    }
    // operators with side cross iterator as other
    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
    {
        return false;
    }

    // PrimeIterator
    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container) : container(container), index(0)
    {
    }
    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other) : container(other.container), index(other.index)
    {
    }
    MagicalContainer::PrimeIterator::~PrimeIterator()
    {
    }
    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other)
    {
        return *this;
    }
    MagicalContainer::PrimeIterator::PrimeIterator(PrimeIterator &&other) noexcept : container(other.container), index(other.index)
    {
    }
    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(PrimeIterator &&other) noexcept
    {
        return *this;
    }
    int MagicalContainer::PrimeIterator::operator*() const
    {
        return 1;
    }
    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++()
    {
        return *this;
    }
    bool MagicalContainer::PrimeIterator::operator<(const CustomIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::PrimeIterator::operator>(const CustomIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::PrimeIterator::operator==(const CustomIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::PrimeIterator::operator!=(const CustomIterator &other) const
    {
        return false;
    }
    // operators with prime iterator as other
    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
    {
        return false;
    }

    // iterator functions
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
    {
        return AscendingIterator(container);
    }
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
    {
        AscendingIterator iter(container);
        // Set the iterator to the end position
        iter.index = container.size();
        return iter;
    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
    {
        return SideCrossIterator(container);
    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
    {
        SideCrossIterator iter(container);
        // Set the iterator to the end position
        iter.index = container.size();
        return iter;
    }
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
    {
        return PrimeIterator(container);
    }
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
    {
        PrimeIterator iter(container);
        // Set the iterator to the end position
        iter.index = container.size();
        return iter;
    }

}
